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

#ifndef ALIBABACLOUD_ARMS_MODEL_UPDATERUMFILESTATUSREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_UPDATERUMFILESTATUSREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT UpdateRumFileStatusRequest : public RpcServiceRequest {
public:
	UpdateRumFileStatusRequest();
	~UpdateRumFileStatusRequest();
	std::string getPid() const;
	void setPid(const std::string &pid);
	std::string getUuid() const;
	void setUuid(const std::string &uuid);
	std::string getVersionId() const;
	void setVersionId(const std::string &versionId);
	std::string getFileName() const;
	void setFileName(const std::string &fileName);
	std::string getSize() const;
	void setSize(const std::string &size);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string pid_;
	std::string uuid_;
	std::string versionId_;
	std::string fileName_;
	std::string size_;
	std::string regionId_;
	std::string status_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_UPDATERUMFILESTATUSREQUEST_H_
