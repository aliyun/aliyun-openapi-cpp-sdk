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

#ifndef ALIBABACLOUD_AIGEN_MODEL_GENERATECOSPLAYIMAGEREQUEST_H_
#define ALIBABACLOUD_AIGEN_MODEL_GENERATECOSPLAYIMAGEREQUEST_H_

#include <alibabacloud/aigen/AigenExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Aigen {
namespace Model {
class ALIBABACLOUD_AIGEN_EXPORT GenerateCosplayImageRequest : public RpcServiceRequest {
public:
	GenerateCosplayImageRequest();
	~GenerateCosplayImageRequest();
	std::string getTemplateImageUrl() const;
	void setTemplateImageUrl(const std::string &templateImageUrl);
	std::string getFaceImageUrl() const;
	void setFaceImageUrl(const std::string &faceImageUrl);
	bool getAsync() const;
	void setAsync(bool async);
	long getStyle() const;
	void setStyle(long style);

private:
	std::string templateImageUrl_;
	std::string faceImageUrl_;
	bool async_;
	long style_;
};
} // namespace Model
} // namespace Aigen
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AIGEN_MODEL_GENERATECOSPLAYIMAGEREQUEST_H_
