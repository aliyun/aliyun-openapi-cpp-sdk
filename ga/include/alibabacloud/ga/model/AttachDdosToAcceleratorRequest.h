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

#ifndef ALIBABACLOUD_GA_MODEL_ATTACHDDOSTOACCELERATORREQUEST_H_
#define ALIBABACLOUD_GA_MODEL_ATTACHDDOSTOACCELERATORREQUEST_H_

#include <alibabacloud/ga/GaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ga {
namespace Model {
class ALIBABACLOUD_GA_EXPORT AttachDdosToAcceleratorRequest : public RpcServiceRequest {
public:
	AttachDdosToAcceleratorRequest();
	~AttachDdosToAcceleratorRequest();
	std::string getDdosId() const;
	void setDdosId(const std::string &ddosId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDdosRegionId() const;
	void setDdosRegionId(const std::string &ddosRegionId);
	std::string getAcceleratorId() const;
	void setAcceleratorId(const std::string &acceleratorId);

private:
	std::string ddosId_;
	std::string regionId_;
	std::string ddosRegionId_;
	std::string acceleratorId_;
};
} // namespace Model
} // namespace Ga
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GA_MODEL_ATTACHDDOSTOACCELERATORREQUEST_H_
