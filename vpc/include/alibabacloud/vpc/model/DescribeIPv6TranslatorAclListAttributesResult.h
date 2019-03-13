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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6TRANSLATORACLLISTATTRIBUTESRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6TRANSLATORACLLISTATTRIBUTESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT DescribeIPv6TranslatorAclListAttributesResult : public ServiceResult
			{
			public:
				struct AclEntry
				{
					std::string aclEntryComment;
					std::string aclEntryId;
					std::string aclEntryIp;
				};


				DescribeIPv6TranslatorAclListAttributesResult();
				explicit DescribeIPv6TranslatorAclListAttributesResult(const std::string &payload);
				~DescribeIPv6TranslatorAclListAttributesResult();
				std::vector<AclEntry> getAclEntries()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::string getAclId()const;
				std::string getAclName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<AclEntry> aclEntries_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::string aclId_;
				std::string aclName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6TRANSLATORACLLISTATTRIBUTESRESULT_H_