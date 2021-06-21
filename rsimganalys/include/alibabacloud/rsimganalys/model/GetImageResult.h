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

#ifndef ALIBABACLOUD_RSIMGANALYS_MODEL_GETIMAGERESULT_H_
#define ALIBABACLOUD_RSIMGANALYS_MODEL_GETIMAGERESULT_H_

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
			class ALIBABACLOUD_RSIMGANALYS_EXPORT GetImageResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string imageName;
					std::string description;
					std::string uCS;
					std::string aliyunPK;
					std::string userResolution;
					std::string appkey;
					int runStatus;
					long fileTime;
					std::string publicResult;
					std::string pixelSize;
					std::string resolution;
					int publishStatus;
				};


				GetImageResult();
				explicit GetImageResult(const std::string &payload);
				~GetImageResult();
				Data getData()const;
				std::string getResultMessage()const;
				std::string getResultCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				std::string resultMessage_;
				std::string resultCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RSIMGANALYS_MODEL_GETIMAGERESULT_H_