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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_MODIFYINSTANCESPECREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_MODIFYINSTANCESPECREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT ModifyInstanceSpecRequest : public RpcServiceRequest {
public:
	ModifyInstanceSpecRequest();
	~ModifyInstanceSpecRequest();
	bool getAutoUseCoupon() const;
	void setAutoUseCoupon(bool autoUseCoupon);
	std::string getInstanceClass() const;
	void setInstanceClass(const std::string &instanceClass);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	long getDiskSize() const;
	void setDiskSize(long diskSize);
	std::string getDiskType() const;
	void setDiskType(const std::string &diskType);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	long getLogDiskSize() const;
	void setLogDiskSize(long logDiskSize);
	bool getUpgradeSpecNative() const;
	void setUpgradeSpecNative(bool upgradeSpecNative);

private:
	bool autoUseCoupon_;
	std::string instanceClass_;
	bool dryRun_;
	long diskSize_;
	std::string diskType_;
	std::string instanceId_;
	long logDiskSize_;
	bool upgradeSpecNative_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_MODIFYINSTANCESPECREQUEST_H_
