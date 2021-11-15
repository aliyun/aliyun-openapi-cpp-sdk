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

#ifndef ALIBABACLOUD_ALIMT_MODEL_TRANSLATEIMAGEREQUEST_H_
#define ALIBABACLOUD_ALIMT_MODEL_TRANSLATEIMAGEREQUEST_H_

#include <alibabacloud/alimt/AlimtExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alimt {
namespace Model {
class ALIBABACLOUD_ALIMT_EXPORT TranslateImageRequest : public RpcServiceRequest {
public:
	TranslateImageRequest();
	~TranslateImageRequest();
	std::string getExt() const;
	void setExt(const std::string &ext);
	std::string getSourceLanguage() const;
	void setSourceLanguage(const std::string &sourceLanguage);
	std::string getField() const;
	void setField(const std::string &field);
	std::string getImageUrl() const;
	void setImageUrl(const std::string &imageUrl);
	std::string getTargetLanguage() const;
	void setTargetLanguage(const std::string &targetLanguage);
	std::string getImageBase64() const;
	void setImageBase64(const std::string &imageBase64);

private:
	std::string ext_;
	std::string sourceLanguage_;
	std::string field_;
	std::string imageUrl_;
	std::string targetLanguage_;
	std::string imageBase64_;
};
} // namespace Model
} // namespace Alimt
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIMT_MODEL_TRANSLATEIMAGEREQUEST_H_
