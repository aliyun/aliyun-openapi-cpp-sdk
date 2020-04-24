/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_LEDGERDB_MODEL_LISTJOURNALSREQUEST_H_
#define ALIBABACLOUD_LEDGERDB_MODEL_LISTJOURNALSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ledgerdb/LedgerdbExport.h>

namespace AlibabaCloud
{
	namespace Ledgerdb
	{
		namespace Model
		{
			class ALIBABACLOUD_LEDGERDB_EXPORT ListJournalsRequest : public RpcServiceRequest
			{

			public:
				ListJournalsRequest();
				~ListJournalsRequest();

				std::string getLedgerId()const;
				void setLedgerId(const std::string& ledgerId);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				std::string getClue()const;
				void setClue(const std::string& clue);
				int getMaxResults()const;
				void setMaxResults(int maxResults);
				std::string getMemberId()const;
				void setMemberId(const std::string& memberId);

            private:
				std::string ledgerId_;
				std::string nextToken_;
				std::string clue_;
				int maxResults_;
				std::string memberId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LEDGERDB_MODEL_LISTJOURNALSREQUEST_H_