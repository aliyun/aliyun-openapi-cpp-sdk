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

#ifndef ALIBABACLOUD_CSAS_MODEL_UPDATEBOOTANDANTIUNINSTALLPOLICYREQUEST_H_
#define ALIBABACLOUD_CSAS_MODEL_UPDATEBOOTANDANTIUNINSTALLPOLICYREQUEST_H_

#include <alibabacloud/csas/CsasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Csas {
namespace Model {
class ALIBABACLOUD_CSAS_EXPORT UpdateBootAndAntiUninstallPolicyRequest : public RpcServiceRequest {
public:
	struct BlockContent {
		struct BlockTextZh {
			std::string minorButtonText;
			std::string mainButtonText;
			std::string title;
			std::string content;
		};
		BlockTextZh blockTextZh;
		struct BlockTextEn {
			std::string minorButtonText;
			std::string mainButtonText;
			std::string title;
			std::string content;
		};
		BlockTextEn blockTextEn;
	};
	UpdateBootAndAntiUninstallPolicyRequest();
	~UpdateBootAndAntiUninstallPolicyRequest();
	bool getIsAntiUninstall() const;
	void setIsAntiUninstall(bool isAntiUninstall);
	bool getAllowReport() const;
	void setAllowReport(bool allowReport);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::vector<std::string> getUserGroupIds() const;
	void setUserGroupIds(const std::vector<std::string> &userGroupIds);
	std::vector<std::string> getWhitelistUsers() const;
	void setWhitelistUsers(const std::vector<std::string> &whitelistUsers);
	BlockContent getBlockContent() const;
	void setBlockContent(const BlockContent &blockContent);
	bool getIsBoot() const;
	void setIsBoot(bool isBoot);

private:
	bool isAntiUninstall_;
	bool allowReport_;
	std::string sourceIp_;
	std::vector<std::string> userGroupIds_;
	std::vector<std::string> whitelistUsers_;
	BlockContent blockContent_;
	bool isBoot_;
};
} // namespace Model
} // namespace Csas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CSAS_MODEL_UPDATEBOOTANDANTIUNINSTALLPOLICYREQUEST_H_
