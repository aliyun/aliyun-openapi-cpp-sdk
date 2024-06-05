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

#ifndef ALIBABACLOUD_DMS_DG_MODEL_GETUSERGATEWAYINSTANCESRESULT_H_
#define ALIBABACLOUD_DMS_DG_MODEL_GETUSERGATEWAYINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dms-dg/Dms_dgExport.h>

namespace AlibabaCloud
{
	namespace Dms_dg
	{
		namespace Model
		{
			class ALIBABACLOUD_DMS_DG_EXPORT GetUserGatewayInstancesResult : public ServiceResult
			{
			public:
				struct GatewayInstance
				{
					std::string gatewayInstanceId;
					std::string outputIP;
					std::string message;
					long lastUpdateTime;
					std::string localIP;
					std::string connectEndpointType;
					std::string currentVersion;
					std::string gatewayInstanceStatus;
					std::string currentDaemonVersion;
					std::string endPoint;
					std::string regionId;
					std::string gatewayId;
				};


				GetUserGatewayInstancesResult();
				explicit GetUserGatewayInstancesResult(const std::string &payload);
				~GetUserGatewayInstancesResult();
				std::vector<GatewayInstance> getGatewayInstanceList()const;
				std::string getErrorMsg()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<GatewayInstance> gatewayInstanceList_;
				std::string errorMsg_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_DG_MODEL_GETUSERGATEWAYINSTANCESRESULT_H_