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

#ifndef ALIBABACLOUD_POLARDB_MODEL_CREATEAPPLICATIONENDPOINTADDRESSREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_CREATEAPPLICATIONENDPOINTADDRESSREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT CreateApplicationEndpointAddressRequest : public RpcServiceRequest {
public:
	CreateApplicationEndpointAddressRequest();
	~CreateApplicationEndpointAddressRequest();
	std::string getEndpointId() const;
	void setEndpointId(const std::string &endpointId);
	std::string getApplicationId() const;
	void setApplicationId(const std::string &applicationId);
	std::string getNetType() const;
	void setNetType(const std::string &netType);

private:
	std::string endpointId_;
	std::string applicationId_;
	std::string netType_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_CREATEAPPLICATIONENDPOINTADDRESSREQUEST_H_
