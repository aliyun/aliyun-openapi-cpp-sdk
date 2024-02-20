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

#ifndef ALIBABACLOUD_AIGEN_MODEL_GENERATETEXTTEXTUREREQUEST_H_
#define ALIBABACLOUD_AIGEN_MODEL_GENERATETEXTTEXTUREREQUEST_H_

#include <alibabacloud/aigen/AigenExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Aigen {
namespace Model {
class ALIBABACLOUD_AIGEN_EXPORT GenerateTextTextureRequest : public RpcServiceRequest {
public:
	GenerateTextTextureRequest();
	~GenerateTextTextureRequest();
	std::string getTextContent() const;
	void setTextContent(const std::string &textContent);
	std::string getTextureStyle() const;
	void setTextureStyle(const std::string &textureStyle);
	std::string getFontName() const;
	void setFontName(const std::string &fontName);
	std::string getTtfUrl() const;
	void setTtfUrl(const std::string &ttfUrl);
	long getN() const;
	void setN(long n);
	bool getAsync() const;
	void setAsync(bool async);
	bool getAlphaChannel() const;
	void setAlphaChannel(bool alphaChannel);
	std::string getImageUrl() const;
	void setImageUrl(const std::string &imageUrl);
	long getImageShortSize() const;
	void setImageShortSize(long imageShortSize);
	std::string getPrompt() const;
	void setPrompt(const std::string &prompt);
	std::string getOutputImageRatio() const;
	void setOutputImageRatio(const std::string &outputImageRatio);

private:
	std::string textContent_;
	std::string textureStyle_;
	std::string fontName_;
	std::string ttfUrl_;
	long n_;
	bool async_;
	bool alphaChannel_;
	std::string imageUrl_;
	long imageShortSize_;
	std::string prompt_;
	std::string outputImageRatio_;
};
} // namespace Model
} // namespace Aigen
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AIGEN_MODEL_GENERATETEXTTEXTUREREQUEST_H_
