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

#ifndef ALIBABACLOUD_GREEN_MODEL_DESCRIBEOSSSTOCKSTATUSRESULT_H_
#define ALIBABACLOUD_GREEN_MODEL_DESCRIBEOSSSTOCKSTATUSRESULT_H_

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
			class ALIBABACLOUD_GREEN_EXPORT DescribeOssStockStatusResult : public ServiceResult
			{
			public:
				struct Bucket
				{
					std::string bucket;
					bool selected;
					std::vector<std::string> prefixes;
				};


				DescribeOssStockStatusResult();
				explicit DescribeOssStockStatusResult(const std::string &payload);
				~DescribeOssStockStatusResult();
				int getImageTerrorismCount()const;
				int getVideoPornCount()const;
				int getStockStatus()const;
				int getImagePornCount()const;
				int getVideoTotalCount()const;
				int getImageTotalCount()const;
				std::vector<std::string> getSceneList()const;
				std::vector<Bucket> getBucketList()const;
				std::string getFinishedTime()const;
				std::vector<std::string> getResouceTypeList()const;
				int getVideoTerrorismCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				int imageTerrorismCount_;
				int videoPornCount_;
				int stockStatus_;
				int imagePornCount_;
				int videoTotalCount_;
				int imageTotalCount_;
				std::vector<std::string> sceneList_;
				std::vector<Bucket> bucketList_;
				std::string finishedTime_;
				std::vector<std::string> resouceTypeList_;
				int videoTerrorismCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_DESCRIBEOSSSTOCKSTATUSRESULT_H_