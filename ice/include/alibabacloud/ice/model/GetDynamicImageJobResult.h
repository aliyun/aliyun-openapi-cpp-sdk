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

#ifndef ALIBABACLOUD_ICE_MODEL_GETDYNAMICIMAGEJOBRESULT_H_
#define ALIBABACLOUD_ICE_MODEL_GETDYNAMICIMAGEJOBRESULT_H_

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
			class ALIBABACLOUD_ICE_EXPORT GetDynamicImageJobResult : public ServiceResult
			{
			public:
				struct DynamicImageJob
				{
					struct Input
					{
						struct OssFile
						{
							std::string bucket;
							std::string object;
							std::string location;
						};
						std::string type;
						OssFile ossFile;
						std::string media;
					};
					struct Output
					{
						struct OssFile1
						{
							std::string bucket;
							std::string object;
							std::string location;
						};
						std::string type;
						OssFile1 ossFile1;
						std::string media;
					};
					std::string status;
					std::string message;
					std::string userData;
					std::string createTime;
					std::string templateConfig;
					std::string code;
					std::string submitTime;
					std::string outputUrl;
					std::string name;
					Input input;
					std::string finishTime;
					std::string modifiedTime;
					Output output;
					std::string pipelineId;
					std::string triggerSource;
					std::string jobId;
					std::string templateId;
				};


				GetDynamicImageJobResult();
				explicit GetDynamicImageJobResult(const std::string &payload);
				~GetDynamicImageJobResult();
				DynamicImageJob getDynamicImageJob()const;

			protected:
				void parse(const std::string &payload);
			private:
				DynamicImageJob dynamicImageJob_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_GETDYNAMICIMAGEJOBRESULT_H_