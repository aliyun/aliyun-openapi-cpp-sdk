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

#ifndef ALIBABACLOUD_GREEN_MODEL_DESCRIBEOSSINCREMENTCHECKSETTINGRESULT_H_
#define ALIBABACLOUD_GREEN_MODEL_DESCRIBEOSSINCREMENTCHECKSETTINGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT DescribeOssIncrementCheckSettingResult : public ServiceResult
			{
			public:
				struct ImageAutoFreeze
				{
					std::string terrorism;
					bool enabled;
					std::string porn;
				};
				struct BucketConfig
				{
					std::string bucket;
					bool selected;
					std::vector<std::string> prefixes;
				};


				DescribeOssIncrementCheckSettingResult();
				explicit DescribeOssIncrementCheckSettingResult(const std::string &payload);
				~DescribeOssIncrementCheckSettingResult();
				std::vector<std::string> getVideoAutoFreezeSceneList()const;
				std::vector<std::string> getVideoSceneList()const;
				bool getImageEnableLimit()const;
				std::vector<std::string> getImageSceneList()const;
				long getImageScanLimit()const;
				ImageAutoFreeze getImageAutoFreeze()const;
				std::vector<BucketConfig> getBucketConfigList()const;
				std::string getAutoFreezeType()const;
				int getVideoFrameInterval()const;
				int getVideoMaxFrames()const;
				int getVideoMaxSize()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> videoAutoFreezeSceneList_;
				std::vector<std::string> videoSceneList_;
				bool imageEnableLimit_;
				std::vector<std::string> imageSceneList_;
				long imageScanLimit_;
				ImageAutoFreeze imageAutoFreeze_;
				std::vector<BucketConfig> bucketConfigList_;
				std::string autoFreezeType_;
				int videoFrameInterval_;
				int videoMaxFrames_;
				int videoMaxSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_DESCRIBEOSSINCREMENTCHECKSETTINGRESULT_H_