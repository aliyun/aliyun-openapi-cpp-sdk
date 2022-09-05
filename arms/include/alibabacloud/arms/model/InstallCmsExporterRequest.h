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

#ifndef ALIBABACLOUD_ARMS_MODEL_INSTALLCMSEXPORTERREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_INSTALLCMSEXPORTERREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT InstallCmsExporterRequest : public RpcServiceRequest {
public:
	InstallCmsExporterRequest();
	~InstallCmsExporterRequest();
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getDirectArgs() const;
	void setDirectArgs(const std::string &directArgs);
	std::string getCmsArgs() const;
	void setCmsArgs(const std::string &cmsArgs);
	bool getEnableTag() const;
	void setEnableTag(bool enableTag);

private:
	std::string regionId_;
	std::string clusterId_;
	std::string directArgs_;
	std::string cmsArgs_;
	bool enableTag_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_INSTALLCMSEXPORTERREQUEST_H_
