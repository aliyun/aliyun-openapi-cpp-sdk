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

#ifndef ALIBABACLOUD_EHPC_MODEL_GETCLOUDMETRICPROFILINGRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_GETCLOUDMETRICPROFILINGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT GetCloudMetricProfilingResult : public ServiceResult
			{
			public:
				struct SvgInfo
				{
					std::string type;
					int size;
					std::string url;
					std::string name;
				};


				GetCloudMetricProfilingResult();
				explicit GetCloudMetricProfilingResult(const std::string &payload);
				~GetCloudMetricProfilingResult();
				std::vector<SvgInfo> getSvgUrls()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<SvgInfo> svgUrls_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_GETCLOUDMETRICPROFILINGRESULT_H_