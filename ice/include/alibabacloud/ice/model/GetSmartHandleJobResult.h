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

#ifndef ALIBABACLOUD_ICE_MODEL_GETSMARTHANDLEJOBRESULT_H_
#define ALIBABACLOUD_ICE_MODEL_GETSMARTHANDLEJOBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ice/ICEExport.h>

namespace AlibabaCloud
{
	namespace ICE
	{
		namespace Model
		{
			class ALIBABACLOUD_ICE_EXPORT GetSmartHandleJobResult : public ServiceResult
			{
			public:
				struct JobResult
				{
					std::string mediaId;
					std::string aiResult;
				};
				struct SmartJobInfo
				{
					struct InputConfig
					{
						std::string jobParameters;
						std::string inputFile;
					};
					struct OutputConfig
					{
						std::string bucket;
						std::string object;
					};
					std::string outputConfig;
					std::string description;
					std::string jobType;
					std::string modifiedTime;
					std::string userId;
					std::string createTime;
					std::string title;
					std::string editingConfig;
					InputConfig inputConfig;
				};


				GetSmartHandleJobResult();
				explicit GetSmartHandleJobResult(const std::string &payload);
				~GetSmartHandleJobResult();
				JobResult getJobResult()const;
				std::string getUserData()const;
				std::string getState()const;
				std::string getFEExtend()const;
				std::string getOutput()const;
				std::string getJobId()const;
				SmartJobInfo getSmartJobInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				JobResult jobResult_;
				std::string userData_;
				std::string state_;
				std::string fEExtend_;
				std::string output_;
				std::string jobId_;
				SmartJobInfo smartJobInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_GETSMARTHANDLEJOBRESULT_H_