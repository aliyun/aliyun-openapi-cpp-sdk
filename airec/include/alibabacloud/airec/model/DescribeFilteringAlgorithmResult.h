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

#ifndef ALIBABACLOUD_AIREC_MODEL_DESCRIBEFILTERINGALGORITHMRESULT_H_
#define ALIBABACLOUD_AIREC_MODEL_DESCRIBEFILTERINGALGORITHMRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/airec/AirecExport.h>

namespace AlibabaCloud
{
	namespace Airec
	{
		namespace Model
		{
			class ALIBABACLOUD_AIREC_EXPORT DescribeFilteringAlgorithmResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct Meta
					{
						struct ExtInfo
						{
							std::string itemSeparator;
							std::string kvSeparator;
						};
						struct Threshold
						{
							int indexSizeThreshold;
							int indexLossThreshold;
							int sourceDataSizeThreshold;
							int sourceDataRecordThreshold;
						};
						std::string taskId;
						std::string category;
						std::string description;
						std::string projectName;
						std::string clusterId;
						std::string algorithmName;
						std::string cron;
						std::string tableName;
						std::string type;
						ExtInfo extInfo;
						bool cronEnabled;
						Threshold threshold;
						std::string metaType;
					};
					std::string status;
					Meta meta;
					std::string gmtCreate;
					std::string algorithmId;
					std::string gmtModified;
				};


				DescribeFilteringAlgorithmResult();
				explicit DescribeFilteringAlgorithmResult(const std::string &payload);
				~DescribeFilteringAlgorithmResult();
				std::string getRequestId()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AIREC_MODEL_DESCRIBEFILTERINGALGORITHMRESULT_H_