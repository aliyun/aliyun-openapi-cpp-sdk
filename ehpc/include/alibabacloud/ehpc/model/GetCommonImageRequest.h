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

#ifndef ALIBABACLOUD_EHPC_MODEL_GETCOMMONIMAGEREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_GETCOMMONIMAGEREQUEST_H_

#include <alibabacloud/ehpc/EHPCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT GetCommonImageRequest : public RpcServiceRequest {
public:
	GetCommonImageRequest();
	~GetCommonImageRequest();
	std::string getContainType() const;
	void setContainType(const std::string &containType);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getImageName() const;
	void setImageName(const std::string &imageName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);

private:
	std::string containType_;
	std::string clusterId_;
	std::string imageName_;
	std::string regionId_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_GETCOMMONIMAGEREQUEST_H_
