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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_PAGEQUERYWHITELISTSETTINGREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_PAGEQUERYWHITELISTSETTINGREQUEST_H_

#include <alibabacloud/cloudauth/CloudauthExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloudauth {
namespace Model {
class ALIBABACLOUD_CLOUDAUTH_EXPORT PageQueryWhiteListSettingRequest : public RpcServiceRequest {
public:
	PageQueryWhiteListSettingRequest();
	~PageQueryWhiteListSettingRequest();
	std::string getValidEndDate() const;
	void setValidEndDate(const std::string &validEndDate);
	std::string getCertifyId() const;
	void setCertifyId(const std::string &certifyId);
	std::string getCertNo() const;
	void setCertNo(const std::string &certNo);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getServiceCode() const;
	void setServiceCode(const std::string &serviceCode);
	long getSceneId() const;
	void setSceneId(long sceneId);
	std::string getValidStartDate() const;
	void setValidStartDate(const std::string &validStartDate);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string validEndDate_;
	std::string certifyId_;
	std::string certNo_;
	int pageSize_;
	int currentPage_;
	std::string serviceCode_;
	long sceneId_;
	std::string validStartDate_;
	std::string status_;
};
} // namespace Model
} // namespace Cloudauth
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_PAGEQUERYWHITELISTSETTINGREQUEST_H_
