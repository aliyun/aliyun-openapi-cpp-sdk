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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEVPNPBRROUTEENTRYRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEVPNPBRROUTEENTRYRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT CreateVpnPbrRouteEntryResult : public ServiceResult
			{
			public:


				CreateVpnPbrRouteEntryResult();
				explicit CreateVpnPbrRouteEntryResult(const std::string &payload);
				~CreateVpnPbrRouteEntryResult();
				std::string getRouteDest()const;
				std::string getDescription()const;
				std::string getVpnInstanceId()const;
				std::string getOverlayMode()const;
				std::string getNextHop()const;
				std::string getState()const;
				int getPriority()const;
				long getCreateTime()const;
				std::string getRouteSource()const;
				int getWeight()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string routeDest_;
				std::string description_;
				std::string vpnInstanceId_;
				std::string overlayMode_;
				std::string nextHop_;
				std::string state_;
				int priority_;
				long createTime_;
				std::string routeSource_;
				int weight_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEVPNPBRROUTEENTRYRESULT_H_