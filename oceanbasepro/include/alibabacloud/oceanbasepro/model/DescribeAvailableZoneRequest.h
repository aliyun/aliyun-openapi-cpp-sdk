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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEAVAILABLEZONEREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEAVAILABLEZONEREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeAvailableZoneRequest : public RpcServiceRequest {
public:
	DescribeAvailableZoneRequest();
	~DescribeAvailableZoneRequest();
	std::string getSpec() const;
	void setSpec(const std::string &spec);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getObVersion() const;
	void setObVersion(const std::string &obVersion);
	std::string getSeries() const;
	void setSeries(const std::string &series);
	std::string getCpuArch() const;
	void setCpuArch(const std::string &cpuArch);
	std::string getDeployType() const;
	void setDeployType(const std::string &deployType);

private:
	std::string spec_;
	std::string instanceType_;
	std::string obVersion_;
	std::string series_;
	std::string cpuArch_;
	std::string deployType_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEAVAILABLEZONEREQUEST_H_
