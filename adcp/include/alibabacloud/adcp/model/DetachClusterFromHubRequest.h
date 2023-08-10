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

#ifndef ALIBABACLOUD_ADCP_MODEL_DETACHCLUSTERFROMHUBREQUEST_H_
#define ALIBABACLOUD_ADCP_MODEL_DETACHCLUSTERFROMHUBREQUEST_H_

#include <alibabacloud/adcp/AdcpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Adcp {
namespace Model {
class ALIBABACLOUD_ADCP_EXPORT DetachClusterFromHubRequest : public RpcServiceRequest {
public:
	DetachClusterFromHubRequest();
	~DetachClusterFromHubRequest();
	bool getDetachFromMesh() const;
	void setDetachFromMesh(bool detachFromMesh);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getClusterIds() const;
	void setClusterIds(const std::string &clusterIds);

private:
	bool detachFromMesh_;
	std::string clusterId_;
	std::string clusterIds_;
};
} // namespace Model
} // namespace Adcp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ADCP_MODEL_DETACHCLUSTERFROMHUBREQUEST_H_
