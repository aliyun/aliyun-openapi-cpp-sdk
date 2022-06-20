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

#ifndef ALIBABACLOUD_IMAGEENHAN_MODEL_IMAGEBLINDCHARACTERWATERMARKREQUEST_H_
#define ALIBABACLOUD_IMAGEENHAN_MODEL_IMAGEBLINDCHARACTERWATERMARKREQUEST_H_

#include <alibabacloud/imageenhan/ImageenhanExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imageenhan {
namespace Model {
class ALIBABACLOUD_IMAGEENHAN_EXPORT ImageBlindCharacterWatermarkRequest : public RpcServiceRequest {
public:
	ImageBlindCharacterWatermarkRequest();
	~ImageBlindCharacterWatermarkRequest();
	std::string getWatermarkImageURL() const;
	void setWatermarkImageURL(const std::string &watermarkImageURL);
	std::string getOutputFileType() const;
	void setOutputFileType(const std::string &outputFileType);
	std::string getText() const;
	void setText(const std::string &text);
	int getQualityFactor() const;
	void setQualityFactor(int qualityFactor);
	std::string getFunctionType() const;
	void setFunctionType(const std::string &functionType);
	std::string getOriginImageURL() const;
	void setOriginImageURL(const std::string &originImageURL);

private:
	std::string watermarkImageURL_;
	std::string outputFileType_;
	std::string text_;
	int qualityFactor_;
	std::string functionType_;
	std::string originImageURL_;
};
} // namespace Model
} // namespace Imageenhan
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMAGEENHAN_MODEL_IMAGEBLINDCHARACTERWATERMARKREQUEST_H_
