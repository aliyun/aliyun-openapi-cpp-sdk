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

#ifndef ALIBABACLOUD_CSAS_MODEL_CREATEWMEXTRACTTASKREQUEST_H_
#define ALIBABACLOUD_CSAS_MODEL_CREATEWMEXTRACTTASKREQUEST_H_

#include <alibabacloud/csas/CsasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Csas {
namespace Model {
class ALIBABACLOUD_CSAS_EXPORT CreateWmExtractTaskRequest : public RpcServiceRequest {
public:
	struct CsvControl {
		std::string method;
		long embedColumn;
		long embedPrecision;
	};
	CreateWmExtractTaskRequest();
	~CreateWmExtractTaskRequest();
	bool getVideoIsLong() const;
	void setVideoIsLong(bool videoIsLong);
	bool getDocumentIsCapture() const;
	void setDocumentIsCapture(bool documentIsCapture);
	std::string getVideoSpeed() const;
	void setVideoSpeed(const std::string &videoSpeed);
	std::string getApiType() const;
	void setApiType(const std::string &apiType);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getWmType() const;
	void setWmType(const std::string &wmType);
	int getImageDetectLevel() const;
	void setImageDetectLevel(int imageDetectLevel);
	CsvControl getCsvControl() const;
	void setCsvControl(const CsvControl &csvControl);
	std::string getFilename() const;
	void setFilename(const std::string &filename);
	long getWmInfoSize() const;
	void setWmInfoSize(long wmInfoSize);
	std::string getFileUrl() const;
	void setFileUrl(const std::string &fileUrl);

private:
	bool videoIsLong_;
	bool documentIsCapture_;
	std::string videoSpeed_;
	std::string apiType_;
	std::string sourceIp_;
	std::string wmType_;
	int imageDetectLevel_;
	CsvControl csvControl_;
	std::string filename_;
	long wmInfoSize_;
	std::string fileUrl_;
};
} // namespace Model
} // namespace Csas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CSAS_MODEL_CREATEWMEXTRACTTASKREQUEST_H_
