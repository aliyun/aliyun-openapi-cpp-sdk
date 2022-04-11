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

#ifndef ALIBABACLOUD_VOD_MODEL_CREATEUPLOADATTACHEDMEDIAREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_CREATEUPLOADATTACHEDMEDIAREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT CreateUploadAttachedMediaRequest : public RpcServiceRequest {
public:
	CreateUploadAttachedMediaRequest();
	~CreateUploadAttachedMediaRequest();
	std::string getIcon() const;
	void setIcon(const std::string &icon);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getFileSize() const;
	void setFileSize(const std::string &fileSize);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getBusinessType() const;
	void setBusinessType(const std::string &businessType);
	std::string getStorageLocation() const;
	void setStorageLocation(const std::string &storageLocation);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	long getCateId() const;
	void setCateId(long cateId);
	std::string getCateIds() const;
	void setCateIds(const std::string &cateIds);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getMediaExt() const;
	void setMediaExt(const std::string &mediaExt);
	std::string getFileName() const;
	void setFileName(const std::string &fileName);
	std::string getAppId() const;
	void setAppId(const std::string &appId);

private:
	std::string icon_;
	std::string description_;
	std::string fileSize_;
	std::string title_;
	std::string accessKeyId_;
	std::string businessType_;
	std::string storageLocation_;
	std::string userData_;
	long cateId_;
	std::string cateIds_;
	std::string tags_;
	std::string mediaExt_;
	std::string fileName_;
	std::string appId_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_CREATEUPLOADATTACHEDMEDIAREQUEST_H_
