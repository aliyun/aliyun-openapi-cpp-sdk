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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTASSOCIATEDTRANSFERSETTINGRESULT_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTASSOCIATEDTRANSFERSETTINGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/resourcemanager/ResourceManagerExport.h>

namespace AlibabaCloud
{
	namespace ResourceManager
	{
		namespace Model
		{
			class ALIBABACLOUD_RESOURCEMANAGER_EXPORT ListAssociatedTransferSettingResult : public ServiceResult
			{
			public:
				struct AssociatedTransferSetting
				{
					struct RuleSetting
					{
						std::string status;
						std::string triggerType;
						std::string associatedService;
						std::string masterResourceType;
						std::string ruleId;
						std::string associatedResourceType;
						std::string masterService;
					};
					std::string status;
					std::string enablePartialRule;
					std::string accountId;
					std::string enableExistingResourcesTransfer;
					std::vector<RuleSetting> ruleSettings;
				};


				ListAssociatedTransferSettingResult();
				explicit ListAssociatedTransferSettingResult(const std::string &payload);
				~ListAssociatedTransferSettingResult();
				AssociatedTransferSetting getAssociatedTransferSetting()const;

			protected:
				void parse(const std::string &payload);
			private:
				AssociatedTransferSetting associatedTransferSetting_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTASSOCIATEDTRANSFERSETTINGRESULT_H_