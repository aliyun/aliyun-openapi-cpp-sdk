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

#ifndef ALIBABACLOUD_CLOUDAPI_MODEL_DESCRIBEACCESSCONTROLLISTATTRIBUTERESULT_H_
#define ALIBABACLOUD_CLOUDAPI_MODEL_DESCRIBEACCESSCONTROLLISTATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudapi/CloudAPIExport.h>

namespace AlibabaCloud
{
	namespace CloudAPI
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAPI_EXPORT DescribeAccessControlListAttributeResult : public ServiceResult
			{
			public:
				struct AclEntry
				{
					std::string aclEntryComment;
					std::string aclEntryIp;
				};


				DescribeAccessControlListAttributeResult();
				explicit DescribeAccessControlListAttributeResult(const std::string &payload);
				~DescribeAccessControlListAttributeResult();
				std::vector<AclEntry> getAclEntrys()const;
				std::string getAclId()const;
				std::string getIsUsed()const;
				std::string getAclName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<AclEntry> aclEntrys_;
				std::string aclId_;
				std::string isUsed_;
				std::string aclName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAPI_MODEL_DESCRIBEACCESSCONTROLLISTATTRIBUTERESULT_H_