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

#ifndef ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_ADDENDPOINTREQUEST_H_
#define ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_ADDENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/openanalytics-open/Openanalytics_openExport.h>

namespace AlibabaCloud
{
	namespace Openanalytics_open
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENANALYTICS_OPEN_EXPORT AddEndPointRequest : public RpcServiceRequest
			{

			public:
				AddEndPointRequest();
				~AddEndPointRequest();

				std::string getProduct()const;
				void setProduct(const std::string& product);
				std::string getNetworkType()const;
				void setNetworkType(const std::string& networkType);
				std::string getVswitch()const;
				void setVswitch(const std::string& vswitch);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getZone()const;
				void setZone(const std::string& zone);
				std::string getVpcID()const;
				void setVpcID(const std::string& vpcID);

            private:
				std::string product_;
				std::string networkType_;
				std::string vswitch_;
				std::string regionId_;
				std::string zone_;
				std::string vpcID_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_ADDENDPOINTREQUEST_H_