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

#ifndef ALIBABACLOUD_CSAS_MODEL_CREATEWMEMBEDTASKREQUEST_H_
#define ALIBABACLOUD_CSAS_MODEL_CREATEWMEMBEDTASKREQUEST_H_

#include <alibabacloud/csas/CsasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Csas {
namespace Model {
class ALIBABACLOUD_CSAS_EXPORT CreateWmEmbedTaskRequest : public RpcServiceRequest {
public:
	struct DocumentControl {
		bool invisibleAntiAllCopy;
		struct BackgroundControl {
			bool bgAddInvisible;
			struct BgVisibleControl {
				std::string mode;
				std::string posX;
				std::string posY;
				long verticalNumber;
				long horizontalNumber;
				std::string visibleText;
				long fontSize;
				std::string fontColor;
				long angle;
				long horizonNumber;
				long opacity;
				std::string fontTransparent;
			};
			BgVisibleControl bgVisibleControl;
			struct BgInvisibleControl {
				std::string invisibleTransparent;
				long opacity;
			};
			BgInvisibleControl bgInvisibleControl;
			bool bgAddVisible;
		};
		BackgroundControl backgroundControl;
		bool invisibleAntiTextCopy;
	};
	struct CsvControl {
		std::string method;
		long embedColumn;
		long embedPrecision;
	};
	CreateWmEmbedTaskRequest();
	~CreateWmEmbedTaskRequest();
	bool getVideoIsLong() const;
	void setVideoIsLong(bool videoIsLong);
	std::string getApiType() const;
	void setApiType(const std::string &apiType);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	long getImageEmbedLevel() const;
	void setImageEmbedLevel(long imageEmbedLevel);
	std::string getWmType() const;
	void setWmType(const std::string &wmType);
	DocumentControl getDocumentControl() const;
	void setDocumentControl(const DocumentControl &documentControl);
	long getImageEmbedJpegQuality() const;
	void setImageEmbedJpegQuality(long imageEmbedJpegQuality);
	long getWatermarkInfoUint() const;
	void setWatermarkInfoUint(long watermarkInfoUint);
	std::string getWmInfoUint() const;
	void setWmInfoUint(const std::string &wmInfoUint);
	CsvControl getCsvControl() const;
	void setCsvControl(const CsvControl &csvControl);
	std::string getFilename() const;
	void setFilename(const std::string &filename);
	long getWmInfoSize() const;
	void setWmInfoSize(long wmInfoSize);
	std::string getWmInfoBytesB64() const;
	void setWmInfoBytesB64(const std::string &wmInfoBytesB64);
	std::string getFileUrl() const;
	void setFileUrl(const std::string &fileUrl);
	std::string getVideoBitrate() const;
	void setVideoBitrate(const std::string &videoBitrate);

private:
	bool videoIsLong_;
	std::string apiType_;
	std::string sourceIp_;
	long imageEmbedLevel_;
	std::string wmType_;
	DocumentControl documentControl_;
	long imageEmbedJpegQuality_;
	long watermarkInfoUint_;
	std::string wmInfoUint_;
	CsvControl csvControl_;
	std::string filename_;
	long wmInfoSize_;
	std::string wmInfoBytesB64_;
	std::string fileUrl_;
	std::string videoBitrate_;
};
} // namespace Model
} // namespace Csas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CSAS_MODEL_CREATEWMEMBEDTASKREQUEST_H_
