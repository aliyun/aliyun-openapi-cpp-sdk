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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_DEEPFAKEDETECTREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_DEEPFAKEDETECTREQUEST_H_

#include <alibabacloud/cloudauth/CloudauthExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloudauth {
namespace Model {
class ALIBABACLOUD_CLOUDAUTH_EXPORT DeepfakeDetectRequest : public RpcServiceRequest {
public:
	DeepfakeDetectRequest();
	~DeepfakeDetectRequest();
	std::string getFaceBase64() const;
	void setFaceBase64(const std::string &faceBase64);
	std::string getOuterOrderNo() const;
	void setOuterOrderNo(const std::string &outerOrderNo);
	std::string getFaceUrl() const;
	void setFaceUrl(const std::string &faceUrl);
	std::string getFaceInputType() const;
	void setFaceInputType(const std::string &faceInputType);

private:
	std::string faceBase64_;
	std::string outerOrderNo_;
	std::string faceUrl_;
	std::string faceInputType_;
};
} // namespace Model
} // namespace Cloudauth
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_DEEPFAKEDETECTREQUEST_H_
