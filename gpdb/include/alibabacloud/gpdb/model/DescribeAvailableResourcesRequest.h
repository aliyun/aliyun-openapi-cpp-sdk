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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBEAVAILABLERESOURCESREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBEAVAILABLERESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/gpdb/GpdbExport.h>

namespace AlibabaCloud
{
	namespace Gpdb
	{
		namespace Model
		{
			class ALIBABACLOUD_GPDB_EXPORT DescribeAvailableResourcesRequest : public RpcServiceRequest
			{

			public:
				DescribeAvailableResourcesRequest();
				~DescribeAvailableResourcesRequest();

				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getChargeType()const;
				void setChargeType(const std::string& chargeType);
				std::string getRegion()const;
				void setRegion(const std::string& region);

            private:
				std::string accessKeyId_;
				std::string zoneId_;
				std::string chargeType_;
				std::string region_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBEAVAILABLERESOURCESREQUEST_H_