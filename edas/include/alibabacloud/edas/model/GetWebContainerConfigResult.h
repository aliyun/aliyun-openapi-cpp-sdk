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

#ifndef ALIBABACLOUD_EDAS_MODEL_GETWEBCONTAINERCONFIGRESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_GETWEBCONTAINERCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT GetWebContainerConfigResult : public ServiceResult
			{
			public:
				struct WebContainerConfig
				{
					int httpPort;
					std::string uriEncoding;
					std::string contextPath;
					std::string contextInputType;
					std::string serverXml;
					bool useBodyEncoding;
					int maxThreads;
					bool useAdvancedServerXml;
					bool useDefaultConfig;
				};


				GetWebContainerConfigResult();
				explicit GetWebContainerConfigResult(const std::string &payload);
				~GetWebContainerConfigResult();
				std::string getMessage()const;
				WebContainerConfig getWebContainerConfig()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				WebContainerConfig webContainerConfig_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_GETWEBCONTAINERCONFIGRESULT_H_