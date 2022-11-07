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

#ifndef ALIBABACLOUD_CC5G_MODEL_LISTGROUPAUTHORIZATIONRULESRESULT_H_
#define ALIBABACLOUD_CC5G_MODEL_LISTGROUPAUTHORIZATIONRULESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cc5g/CC5GExport.h>

namespace AlibabaCloud
{
	namespace CC5G
	{
		namespace Model
		{
			class ALIBABACLOUD_CC5G_EXPORT ListGroupAuthorizationRulesResult : public ServiceResult
			{
			public:
				struct GroupAuthorizationRule
				{
					std::string status;
					std::string policy;
					std::string destination;
					std::string description;
					std::string sourceCidr;
					std::string createTime;
					std::string authorizationRuleId;
					bool dns;
					std::string destinationType;
					std::string destinationPort;
					std::string name;
					std::string type;
					std::string protocol;
				};


				ListGroupAuthorizationRulesResult();
				explicit ListGroupAuthorizationRulesResult(const std::string &payload);
				~ListGroupAuthorizationRulesResult();
				std::vector<GroupAuthorizationRule> getGroupAuthorizationRules()const;
				std::string getTotalCount()const;
				std::string getNextToken()const;
				std::string getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<GroupAuthorizationRule> groupAuthorizationRules_;
				std::string totalCount_;
				std::string nextToken_;
				std::string maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CC5G_MODEL_LISTGROUPAUTHORIZATIONRULESRESULT_H_