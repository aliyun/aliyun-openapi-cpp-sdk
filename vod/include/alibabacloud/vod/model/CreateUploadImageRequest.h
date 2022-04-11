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

#ifndef ALIBABACLOUD_VOD_MODEL_CREATEUPLOADIMAGEREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_CREATEUPLOADIMAGEREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT CreateUploadImageRequest : public RpcServiceRequest {
public:
	CreateUploadImageRequest();
	~CreateUploadImageRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getStorageLocation() const;
	void setStorageLocation(const std::string &storageLocation);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	long getCateId() const;
	void setCateId(long cateId);
	std::string getImageType() const;
	void setImageType(const std::string &imageType);
	std::string getImageExt() const;
	void setImageExt(const std::string &imageExt);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getOriginalFileName() const;
	void setOriginalFileName(const std::string &originalFileName);
	std::string getAppId() const;
	void setAppId(const std::string &appId);

private:
	std::string description_;
	std::string title_;
	std::string accessKeyId_;
	std::string storageLocation_;
	std::string userData_;
	long cateId_;
	std::string imageType_;
	std::string imageExt_;
	std::string tags_;
	std::string originalFileName_;
	std::string appId_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_CREATEUPLOADIMAGEREQUEST_H_
