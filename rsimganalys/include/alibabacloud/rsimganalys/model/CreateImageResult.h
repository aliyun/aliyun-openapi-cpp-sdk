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

#ifndef ALIBABACLOUD_RSIMGANALYS_MODEL_CREATEIMAGERESULT_H_
#define ALIBABACLOUD_RSIMGANALYS_MODEL_CREATEIMAGERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rsimganalys/RsimganalysExport.h>

namespace AlibabaCloud
{
	namespace Rsimganalys
	{
		namespace Model
		{
			class ALIBABACLOUD_RSIMGANALYS_EXPORT CreateImageResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string description;
					std::string gmtModified;
					int runStatus;
					std::string downloadPath;
					long fileTime;
					std::string statusCode;
					std::string statusMessage;
					std::string imageName;
					std::string gmtCreate;
					std::string aliyunPK;
					int imageId;
					std::string jobId;
					std::string urlUploadPath;
				};


				CreateImageResult();
				explicit CreateImageResult(const std::string &payload);
				~CreateImageResult();
				std::string getUserResolution()const;
				std::string getImageId()const;
				Data getData()const;
				std::string getResultMessage()const;
				int getResultCode()const;
				int getPublishStatus()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string userResolution_;
				std::string imageId_;
				Data data_;
				std::string resultMessage_;
				int resultCode_;
				int publishStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RSIMGANALYS_MODEL_CREATEIMAGERESULT_H_