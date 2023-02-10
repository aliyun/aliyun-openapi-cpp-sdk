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

#ifndef ALIBABACLOUD_SAS_MODEL_LISTCLOUDASSETINSTANCESRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_LISTCLOUDASSETINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT ListCloudAssetInstancesResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
					int count;
				};
				struct InstancesItem
				{
					long createdTime;
					std::string assetTypeName;
					std::string instanceId;
					std::string assetSubTypeName;
					int vendor;
					std::string riskStatus;
					std::string instanceName;
					int assetType;
					std::string internetIp;
					std::string alarmStatus;
					std::string regionId;
					std::string assetSubType;
					std::string securityInfo;
				};


				ListCloudAssetInstancesResult();
				explicit ListCloudAssetInstancesResult(const std::string &payload);
				~ListCloudAssetInstancesResult();
				std::vector<InstancesItem> getInstances()const;
				PageInfo getPageInfo()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<InstancesItem> instances_;
				PageInfo pageInfo_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_LISTCLOUDASSETINSTANCESRESULT_H_