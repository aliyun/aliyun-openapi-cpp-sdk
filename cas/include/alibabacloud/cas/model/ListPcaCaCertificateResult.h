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

#ifndef ALIBABACLOUD_CAS_MODEL_LISTPCACACERTIFICATERESULT_H_
#define ALIBABACLOUD_CAS_MODEL_LISTPCACACERTIFICATERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cas/CasExport.h>

namespace AlibabaCloud
{
	namespace Cas
	{
		namespace Model
		{
			class ALIBABACLOUD_CAS_EXPORT ListPcaCaCertificateResult : public ServiceResult
			{
			public:
				struct ListItem
				{
					std::string status;
					std::string issuerIdentifier;
					std::string userId;
					std::string certIdentifier;
					std::string privateCaInstanceId;
					std::string privateCaRegionId;
					ObjectOfAny innerResult;
					std::string commonName;
				};


				ListPcaCaCertificateResult();
				explicit ListPcaCaCertificateResult(const std::string &payload);
				~ListPcaCaCertificateResult();
				long getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;
				std::vector<ListItem> getList()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string nextToken_;
				int maxResults_;
				std::vector<ListItem> list_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_LISTPCACACERTIFICATERESULT_H_