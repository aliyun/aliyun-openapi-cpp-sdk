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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEDESKTOPTYPESREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEDESKTOPTYPESREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT DescribeDesktopTypesRequest : public RpcServiceRequest {
public:
	DescribeDesktopTypesRequest();
	~DescribeDesktopTypesRequest();
	std::string getAppliedScope() const;
	void setAppliedScope(const std::string &appliedScope);
	int getMemorySize() const;
	void setMemorySize(int memorySize);
	float getGpuCount() const;
	void setGpuCount(float gpuCount);
	std::string getInstanceTypeFamily() const;
	void setInstanceTypeFamily(const std::string &instanceTypeFamily);
	std::string getDesktopTypeId() const;
	void setDesktopTypeId(const std::string &desktopTypeId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDesktopIdForModify() const;
	void setDesktopIdForModify(const std::string &desktopIdForModify);
	int getCpuCount() const;
	void setCpuCount(int cpuCount);
	std::string getOrderType() const;
	void setOrderType(const std::string &orderType);

private:
	std::string appliedScope_;
	int memorySize_;
	float gpuCount_;
	std::string instanceTypeFamily_;
	std::string desktopTypeId_;
	std::string regionId_;
	std::string desktopIdForModify_;
	int cpuCount_;
	std::string orderType_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEDESKTOPTYPESREQUEST_H_
