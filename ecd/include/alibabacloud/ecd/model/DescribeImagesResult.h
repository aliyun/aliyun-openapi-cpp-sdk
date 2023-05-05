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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEIMAGESRESULT_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEIMAGESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecd/EcdExport.h>

namespace AlibabaCloud
{
	namespace Ecd
	{
		namespace Model
		{
			class ALIBABACLOUD_ECD_EXPORT DescribeImagesResult : public ServiceResult
			{
			public:
				struct Image
				{
					std::string status;
					std::string progress;
					std::string sessionType;
					std::string description;
					int sharedCount;
					std::string platform;
					int size;
					bool volumeEncryptionEnabled;
					std::string imageType;
					std::string name;
					std::string gpuDriverVersion;
					std::string appVersion;
					std::vector<std::string> supportedLanguages;
					std::string osType;
					std::string protocolType;
					std::string volumeEncryptionKey;
					std::string creationTime;
					std::string imageId;
					bool gpuCategory;
					std::string updateTime;
					int dataDiskSize;
				};


				DescribeImagesResult();
				explicit DescribeImagesResult(const std::string &payload);
				~DescribeImagesResult();
				std::string getNextToken()const;
				std::vector<Image> getImages()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<Image> images_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEIMAGESRESULT_H_