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

#ifndef ALIBABACLOUD_OCR_MODEL_RECOGNIZETABLEREQUEST_H_
#define ALIBABACLOUD_OCR_MODEL_RECOGNIZETABLEREQUEST_H_

#include <alibabacloud/ocr/OcrExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ocr {
namespace Model {
class ALIBABACLOUD_OCR_EXPORT RecognizeTableRequest : public RpcServiceRequest {
public:
	RecognizeTableRequest();
	~RecognizeTableRequest();
	bool getUseFinanceModel() const;
	void setUseFinanceModel(bool useFinanceModel);
	bool getSkipDetection() const;
	void setSkipDetection(bool skipDetection);
	std::string getOutputFormat() const;
	void setOutputFormat(const std::string &outputFormat);
	bool getAssureDirection() const;
	void setAssureDirection(bool assureDirection);
	bool getHasLine() const;
	void setHasLine(bool hasLine);
	int getImageType() const;
	void setImageType(int imageType);
	std::string getImageURL() const;
	void setImageURL(const std::string &imageURL);

private:
	bool useFinanceModel_;
	bool skipDetection_;
	std::string outputFormat_;
	bool assureDirection_;
	bool hasLine_;
	int imageType_;
	std::string imageURL_;
};
} // namespace Model
} // namespace Ocr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCR_MODEL_RECOGNIZETABLEREQUEST_H_
