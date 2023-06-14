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

#ifndef ALIBABACLOUD_GA_MODEL_LISTACLSRESULT_H_
#define ALIBABACLOUD_GA_MODEL_LISTACLSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ga/GaExport.h>

namespace AlibabaCloud
{
	namespace Ga
	{
		namespace Model
		{
			class ALIBABACLOUD_GA_EXPORT ListAclsResult : public ServiceResult
			{
			public:
				struct GaAcls
				{
					struct TagsItem
					{
						std::string value;
						std::string key;
					};
					std::string aclStatus;
					std::string resourceGroupId;
					std::string aclId;
					std::string addressIPVersion;
					std::vector<GaAcls::TagsItem> tags;
					std::string aclName;
				};


				ListAclsResult();
				explicit ListAclsResult(const std::string &payload);
				~ListAclsResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				std::vector<GaAcls> getAcls()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				std::vector<GaAcls> acls_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_LISTACLSRESULT_H_