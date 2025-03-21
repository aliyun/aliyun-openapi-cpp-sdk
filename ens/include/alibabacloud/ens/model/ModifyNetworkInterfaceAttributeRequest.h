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

#ifndef ALIBABACLOUD_ENS_MODEL_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT ModifyNetworkInterfaceAttributeRequest : public RpcServiceRequest {
public:
	ModifyNetworkInterfaceAttributeRequest();
	~ModifyNetworkInterfaceAttributeRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getNetworkInterfaceName() const;
	void setNetworkInterfaceName(const std::string &networkInterfaceName);
	std::string getNetworkInterfaceId() const;
	void setNetworkInterfaceId(const std::string &networkInterfaceId);

private:
	std::string description_;
	std::string networkInterfaceName_;
	std::string networkInterfaceId_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_H_
