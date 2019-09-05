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

#ifndef ALIBABACLOUD_FOAS_MODEL_CREATECLUSTERREQUEST_H_
#define ALIBABACLOUD_FOAS_MODEL_CREATECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/foas/FoasExport.h>

namespace AlibabaCloud
{
	namespace Foas
	{
		namespace Model
		{
			class ALIBABACLOUD_FOAS_EXPORT CreateClusterRequest : public RoaServiceRequest
			{

			public:
				CreateClusterRequest();
				~CreateClusterRequest();

				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getOrderId()const;
				void setOrderId(const std::string& orderId);
				std::string getUserOssBucket()const;
				void setUserOssBucket(const std::string& userOssBucket);
				std::string getDisplayName()const;
				void setDisplayName(const std::string& displayName);
				std::string getUserVpcId()const;
				void setUserVpcId(const std::string& userVpcId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getUserVSwitch()const;
				void setUserVSwitch(const std::string& userVSwitch);

            private:
				std::string regionId_;
				std::string orderId_;
				std::string userOssBucket_;
				std::string displayName_;
				std::string userVpcId_;
				std::string zoneId_;
				std::string description_;
				std::string userVSwitch_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FOAS_MODEL_CREATECLUSTERREQUEST_H_