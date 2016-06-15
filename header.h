#include <iostream>
using namespace std;

namespace main_savitch_12A
{
    template <class RecordType>
    class table
    {
    public:
        // MEMBER CONSTANT -- See Appendix E if this fails to compile.
        static const int CAPACITY = 811;
        // CONSTRUCTOR
        table( );
        // MODIFICATION MEMBER FUNCTIONS
        void insert(const RecordType& entry);
        void remove(int key);
        // CONSTANT MEMBER FUNCTIONS
        bool is_present(int key) const;
        void find(int key, bool& found, RecordType& result) const;
        int size( ) const { return used; }
    private:
        // MEMBER CONSTANTS -- These are used in the key field of special records.
        int NEVER_USED = -1;
        int PREVIOUSLY_USED = -2;
        // MEMBER VARIABLES
        RecordType data[CAPACITY];
        int used;
        // HELPER FUNCTIONS
        int hash(int key) const;
        int next_index(int index) const;
        void find_index(int key, bool& found, int& index) const;
        bool never_used(int index) const;
        bool is_vacant(int index) const;
    };
}
#include "table1.template" // Include the implementation.
