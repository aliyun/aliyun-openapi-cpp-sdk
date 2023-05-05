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

#ifndef ALIBABACLOUD_ECD_MODEL_CREATECDSFILESHARELINKREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_CREATECDSFILESHARELINKREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT CreateCdsFileShareLinkRequest : public RpcServiceRequest {
public:
	CreateCdsFileShareLinkRequest();
	~CreateCdsFileShareLinkRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	long getPreviewLimit() const;
	void setPreviewLimit(long previewLimit);
	bool getDisableDownload() const;
	void setDisableDownload(bool disableDownload);
	bool getDisablePreview() const;
	void setDisablePreview(bool disablePreview);
	std::string getSharePwd() const;
	void setSharePwd(const std::string &sharePwd);
	std::string getShareName() const;
	void setShareName(const std::string &shareName);
	std::string getEndUserId() const;
	void setEndUserId(const std::string &endUserId);
	bool getDisableSave() const;
	void setDisableSave(bool disableSave);
	long getDownloadLimit() const;
	void setDownloadLimit(long downloadLimit);
	std::string getCdsId() const;
	void setCdsId(const std::string &cdsId);
	long getSaveLimit() const;
	void setSaveLimit(long saveLimit);
	std::vector<std::string> getFileIds() const;
	void setFileIds(const std::vector<std::string> &fileIds);
	std::string getExpiration() const;
	void setExpiration(const std::string &expiration);

private:
	std::string description_;
	long previewLimit_;
	bool disableDownload_;
	bool disablePreview_;
	std::string sharePwd_;
	std::string shareName_;
	std::string endUserId_;
	bool disableSave_;
	long downloadLimit_;
	std::string cdsId_;
	long saveLimit_;
	std::vector<std::string> fileIds_;
	std::string expiration_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_CREATECDSFILESHARELINKREQUEST_H_
