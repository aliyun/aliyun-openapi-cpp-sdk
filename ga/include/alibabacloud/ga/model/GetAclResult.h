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

#ifndef ALIBABACLOUD_GA_MODEL_GETACLRESULT_H_
#define ALIBABACLOUD_GA_MODEL_GETACLRESULT_H_

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
			class ALIBABACLOUD_GA_EXPORT GetAclResult : public ServiceResult
			{
			public:
				struct AclEntriesItem
				{
					std::string entry;
					std::string entryDescription;
				};
				struct RelatedListenersItem
				{
					std::string aclType;
					std::string acceleratorId;
					std::string listenerId;
				};
				struct TagsItem
				{
					std::string value;
					std::string key;
				};


				GetAclResult();
				explicit GetAclResult(const std::string &payload);
				~GetAclResult();
				std::vector<AclEntriesItem> getAclEntries()const;
				std::string getAclStatus()const;
				std::string getResourceGroupId()const;
				std::string getAclId()const;
				std::string getAddressIPVersion()const;
				std::vector<RelatedListenersItem> getRelatedListeners()const;
				std::vector<TagsItem> getTags()const;
				std::string getAclName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<AclEntriesItem> aclEntries_;
				std::string aclStatus_;
				std::string resourceGroupId_;
				std::string aclId_;
				std::string addressIPVersion_;
				std::vector<RelatedListenersItem> relatedListeners_;
				std::vector<TagsItem> tags_;
				std::string aclName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_GETACLRESULT_H_