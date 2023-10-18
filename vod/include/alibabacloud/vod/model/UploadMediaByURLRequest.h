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

#ifndef ALIBABACLOUD_VOD_MODEL_UPLOADMEDIABYURLREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_UPLOADMEDIABYURLREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT UploadMediaByURLRequest : public RpcServiceRequest {
public:
	UploadMediaByURLRequest();
	~UploadMediaByURLRequest();
	std::string getMessageCallback() const;
	void setMessageCallback(const std::string &messageCallback);
	std::string getSessionId() const;
	void setSessionId(const std::string &sessionId);
	std::string getStorageLocation() const;
	void setStorageLocation(const std::string &storageLocation);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getWorkflowId() const;
	void setWorkflowId(const std::string &workflowId);
	std::string getS3UploadInfo() const;
	void setS3UploadInfo(const std::string &s3UploadInfo);
	std::string getPriority() const;
	void setPriority(const std::string &priority);
	std::string getTemplateGroupId() const;
	void setTemplateGroupId(const std::string &templateGroupId);
	std::string getUploadMetadatas() const;
	void setUploadMetadatas(const std::string &uploadMetadatas);
	std::string getUploadURLs() const;
	void setUploadURLs(const std::string &uploadURLs);
	std::string getAppId() const;
	void setAppId(const std::string &appId);

private:
	std::string messageCallback_;
	std::string sessionId_;
	std::string storageLocation_;
	std::string userData_;
	std::string workflowId_;
	std::string s3UploadInfo_;
	std::string priority_;
	std::string templateGroupId_;
	std::string uploadMetadatas_;
	std::string uploadURLs_;
	std::string appId_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_UPLOADMEDIABYURLREQUEST_H_
