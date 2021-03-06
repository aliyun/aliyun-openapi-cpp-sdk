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

#ifndef ALIBABACLOUD_DG_MODEL_DELETEDATABASEACCESSPOINTREQUEST_H_
#define ALIBABACLOUD_DG_MODEL_DELETEDATABASEACCESSPOINTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dg/DgExport.h>

namespace AlibabaCloud
{
	namespace Dg
	{
		namespace Model
		{
			class ALIBABACLOUD_DG_EXPORT DeleteDatabaseAccessPointRequest : public RpcServiceRequest
			{

			public:
				DeleteDatabaseAccessPointRequest();
				~DeleteDatabaseAccessPointRequest();

				std::string getVpcAZone()const;
				void setVpcAZone(const std::string& vpcAZone);
				std::string getVpcRegionId()const;
				void setVpcRegionId(const std::string& vpcRegionId);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getDbInstanceId()const;
				void setDbInstanceId(const std::string& dbInstanceId);

            private:
				std::string vpcAZone_;
				std::string vpcRegionId_;
				std::string vSwitchId_;
				std::string regionId_;
				std::string vpcId_;
				std::string dbInstanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DG_MODEL_DELETEDATABASEACCESSPOINTREQUEST_H_