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

#ifndef ALIBABACLOUD_SLB_MODEL_DESCRIBEACCESSCONTROLLISTATTRIBUTERESULT_H_
#define ALIBABACLOUD_SLB_MODEL_DESCRIBEACCESSCONTROLLISTATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/slb/SlbExport.h>

namespace AlibabaCloud
{
	namespace Slb
	{
		namespace Model
		{
			class ALIBABACLOUD_SLB_EXPORT DescribeAccessControlListAttributeResult : public ServiceResult
			{
			public:
				struct Tag
				{
					std::string tagKey;
					std::string tagValue;
				};
				struct AclEntry
				{
					std::string aclEntryComment;
					std::string aclEntryIP;
				};
				struct RelatedListener
				{
					int listenerPort;
					std::string aclType;
					std::string loadBalancerId;
					std::string protocol;
				};


				DescribeAccessControlListAttributeResult();
				explicit DescribeAccessControlListAttributeResult(const std::string &payload);
				~DescribeAccessControlListAttributeResult();
				std::vector<AclEntry> getAclEntrys()const;
				std::string getResourceGroupId()const;
				int getTotalAclEntry()const;
				std::string getServiceManagedMode()const;
				std::string getAclId()const;
				std::string getAddressIPVersion()const;
				std::string getCreateTime()const;
				std::vector<RelatedListener> getRelatedListeners()const;
				std::vector<Tag> getTags()const;
				std::string getAclName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<AclEntry> aclEntrys_;
				std::string resourceGroupId_;
				int totalAclEntry_;
				std::string serviceManagedMode_;
				std::string aclId_;
				std::string addressIPVersion_;
				std::string createTime_;
				std::vector<RelatedListener> relatedListeners_;
				std::vector<Tag> tags_;
				std::string aclName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBEACCESSCONTROLLISTATTRIBUTERESULT_H_