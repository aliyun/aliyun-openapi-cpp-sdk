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

#ifndef ALIBABACLOUD_ICE_MODEL_CREATEUPLOADMEDIAREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_CREATEUPLOADMEDIAREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT CreateUploadMediaRequest : public RpcServiceRequest {
public:
	CreateUploadMediaRequest();
	~CreateUploadMediaRequest();
	std::string getEntityId() const;
	void setEntityId(const std::string &entityId);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getBiz() const;
	void setBiz(const std::string &biz);
	std::string getFileInfo() const;
	void setFileInfo(const std::string &fileInfo);
	std::string getMediaMetaData() const;
	void setMediaMetaData(const std::string &mediaMetaData);
	std::string getPostProcessConfig() const;
	void setPostProcessConfig(const std::string &postProcessConfig);
	std::string getUploadSource() const;
	void setUploadSource(const std::string &uploadSource);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getUploadTargetConfig() const;
	void setUploadTargetConfig(const std::string &uploadTargetConfig);

private:
	std::string entityId_;
	std::string userData_;
	std::string biz_;
	std::string fileInfo_;
	std::string mediaMetaData_;
	std::string postProcessConfig_;
	std::string uploadSource_;
	std::string appId_;
	std::string uploadTargetConfig_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_CREATEUPLOADMEDIAREQUEST_H_
