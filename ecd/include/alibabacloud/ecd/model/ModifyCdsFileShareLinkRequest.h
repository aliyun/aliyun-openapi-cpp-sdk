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

#ifndef ALIBABACLOUD_ECD_MODEL_MODIFYCDSFILESHARELINKREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_MODIFYCDSFILESHARELINKREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT ModifyCdsFileShareLinkRequest : public RpcServiceRequest {
public:
	ModifyCdsFileShareLinkRequest();
	~ModifyCdsFileShareLinkRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getShareId() const;
	void setShareId(const std::string &shareId);
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
	long getDownloadCount() const;
	void setDownloadCount(long downloadCount);
	bool getDisableSave() const;
	void setDisableSave(bool disableSave);
	long getSaveCount() const;
	void setSaveCount(long saveCount);
	long getReportCount() const;
	void setReportCount(long reportCount);
	long getVideoPreviewCount() const;
	void setVideoPreviewCount(long videoPreviewCount);
	long getDownloadLimit() const;
	void setDownloadLimit(long downloadLimit);
	std::string getCdsId() const;
	void setCdsId(const std::string &cdsId);
	long getSaveLimit() const;
	void setSaveLimit(long saveLimit);
	std::string getExpiration() const;
	void setExpiration(const std::string &expiration);
	long getPreviewCount() const;
	void setPreviewCount(long previewCount);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string description_;
	std::string shareId_;
	long previewLimit_;
	bool disableDownload_;
	bool disablePreview_;
	std::string sharePwd_;
	std::string shareName_;
	long downloadCount_;
	bool disableSave_;
	long saveCount_;
	long reportCount_;
	long videoPreviewCount_;
	long downloadLimit_;
	std::string cdsId_;
	long saveLimit_;
	std::string expiration_;
	long previewCount_;
	std::string status_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_MODIFYCDSFILESHARELINKREQUEST_H_
