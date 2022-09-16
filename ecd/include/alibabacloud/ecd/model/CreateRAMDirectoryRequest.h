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

#ifndef ALIBABACLOUD_ECD_MODEL_CREATERAMDIRECTORYREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_CREATERAMDIRECTORYREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT CreateRAMDirectoryRequest : public RpcServiceRequest {
public:
	CreateRAMDirectoryRequest();
	~CreateRAMDirectoryRequest();
	std::string getDesktopAccessType() const;
	void setDesktopAccessType(const std::string &desktopAccessType);
	bool getEnableInternetAccess() const;
	void setEnableInternetAccess(bool enableInternetAccess);
	std::string getDirectoryName() const;
	void setDirectoryName(const std::string &directoryName);
	std::vector<std::string> getVSwitchId() const;
	void setVSwitchId(const std::vector<std::string> &vSwitchId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getEnableAdminAccess() const;
	void setEnableAdminAccess(bool enableAdminAccess);

private:
	std::string desktopAccessType_;
	bool enableInternetAccess_;
	std::string directoryName_;
	std::vector<std::string> vSwitchId_;
	std::string regionId_;
	bool enableAdminAccess_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_CREATERAMDIRECTORYREQUEST_H_
