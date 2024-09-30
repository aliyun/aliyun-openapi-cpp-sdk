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

#ifndef ALIBABACLOUD_TAG_MODEL_LISTPOLICIESRESULT_H_
#define ALIBABACLOUD_TAG_MODEL_LISTPOLICIESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/tag/TagExport.h>

namespace AlibabaCloud
{
	namespace Tag
	{
		namespace Model
		{
			class ALIBABACLOUD_TAG_EXPORT ListPoliciesResult : public ServiceResult
			{
			public:
				struct Policy
				{
					std::string policyDesc;
					std::string policyName;
					std::string userType;
					std::string policyId;
					std::string policyContent;
				};


				ListPoliciesResult();
				explicit ListPoliciesResult(const std::string &payload);
				~ListPoliciesResult();
				std::string getNextToken()const;
				std::vector<Policy> getPolicyList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<Policy> policyList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TAG_MODEL_LISTPOLICIESRESULT_H_